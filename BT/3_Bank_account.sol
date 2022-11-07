// pragma solidity ^0.6;
// Write  a  smart  contract  on  a  test  network,  for  Bank  account  of  a  customer  for  // following operations: Deposit money | Withdraw Money | Show balance

contract banking{
    mapping(address => uint) public user_account;
    mapping(address=>bool) public user_exists;

    function create_account() public payable returns (string memory){
        require(user_exists[msg.sender] == false, 'Account already created');
        if(msg.value == 0){
            user_account[msg.sender] = 0;
            user_exists[msg.sender] = true;
            return "Account Created";
        }
        require(user_exists[msg.sender] == false, "Account already created");
        user_account[msg.sender] = msg.value;
        user_exists[msg.sender] = true;
        return "Account created";
    }

    function deposit() public payable returns (string memory){
        require(user_exists[msg.sender] == true, "Account not created");
        require(msg.value > 0, "Value for deposit is Zero");
        user_account[msg.sender] = user_account[msg.sender] + msg.value;
        return "Deposisted Successfully";
    }

    function withdraw(uint amount) public payable returns (string memory){
        require(user_account[msg.sender] > amount, "Insufficient Balance");
        require(user_exists[msg.sender] == true, "Account not created");
        require(msg.value > 0, "Value for withdraw is Zero");
        user_account[msg.sender] = user_account[msg.sender] - amount;
        payable(msg.sender).transfer(amount);
        return "Withdrawn Successfully";
    }

    function transfer(address payable userAddress, uint amount) public returns(string memory){
        require(user_account[msg.sender] > amount, "Insufficient Balance");
        require(user_exists[msg.sender] == true, "Account not created");
        require(user_exists[userAddress] == true, "Account not created");
        require(amount > 0, "Amount should be greater than 0");
        user_account[msg.sender] = user_account[msg.sender] - amount;
        user_account[userAddress] = user_account[userAddress] + amount;
        return "Transfered Successfully";
    }

    function send_amt(address payable toAddress, uint256 amount) public payable returns(string memory){
        require(user_account[msg.sender] > amount, "Insufficient Balance");
        require(user_exists[msg.sender] == true, "Account not created");
        require(amount > 0, "Amount should be greater than zero");
        user_account[msg.sender] = user_account[msg.sender] - amount;
        toAddress.transfer(amount);
        return "Transfer Successfull";
    }

    function user_balance() public view returns(uint){
        return user_account[msg.sender];
    }

    function account_exists() public view returns(bool){
        return user_exists[msg.sender];
    }

}