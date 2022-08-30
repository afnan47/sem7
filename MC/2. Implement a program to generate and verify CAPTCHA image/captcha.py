import random

def checkCaptcha(captcha, user_captcha):
    if captcha == user_captcha:
        return True
    return False

def generateCaptcha(n):
    chrs = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    captcha = ""
    while(n):
        captcha += chrs[random.randint(1, 1000) % 62]
        n -= 1
    return captcha

if __name__ == "__main__":
    #Length of captcha
    n = 9
    captcha = generateCaptcha(9)
    print(captcha)

    user_captcha = input("Enter the captcha:")
    if(checkCaptcha(captcha, user_captcha)):
        print("CAPTCHA Matched!")
    else:
        print("CAPTCHA Not Matched")