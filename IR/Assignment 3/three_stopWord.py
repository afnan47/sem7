import io
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize


stop_words = set(stopwords.words('english'))
file1 = open("text.txt")


line = file1.read()
words = line.split()
for r in words:
	if not r in stop_words:
		appendFile = open('filteredtext.txt','a')
		appendFile.write(" "+r)
		appendFile.close()


#INPUT
# Jane Austen’s Pride and Prejudice is an 18th-century novel of manners set in rural 
# England and portraying the relationships between the four daughters of the Bennet 
# family and their neighbors. While accurately and vividly depicting the manners and 
# social norms of that time, the novel also provides sharp observations on the 
# themes of love, marriage, class, money, education, and social prestige. In 
# this paper, the four main themes of Pride and Prejudice are analyzed. Marriage 
# is the main topic around which the plot revolves. The author illustrates the 
# conflict between marrying for money, which was the typical idea at the time, 
# and marrying for love. In either case, the economic and social differences were 
# obstacles which made it hard for young women from poor families to break out of 
# their social circle. Each person’s position in society was determined by their 
# class, and the relations between families also centered around differences in wealth 
# and status. The gender differences also played an important role, as women were 
# considered inferior to men and were practically unable to choose partners. Austen 
# both criticizes and examines the social life of 18th-century England, advocating for 
# marrying for love as one of the essential female rights.


#OUTPUT
#  Jane Austen’s Pride Prejudice 18th-century novel manners set rural England 
#  portraying relationships four daughters Bennet family neighbors. While accurately 
#  vividly depicting manners social norms time, novel also provides 
#  sharp observations themes love, marriage, class, money, education, social prestige. 
#  In paper, four main themes Pride Prejudice analyzed. Marriage main topic around 
#  plot revolves. The author illustrates conflict marrying money, typical idea 
#  time, marrying love. In either case, economic social differences obstacles made 
#  hard young women poor families break social circle. Each person’s position 
#  society determined class, relations families also centered around differences 
#  wealth status. The gender differences also played important role, women 
#  considered inferior men practically unable choose partners. Austen criticizes examines 
#  social life 18th-century England, advocating marrying love one essential female rights.
