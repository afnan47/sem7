import re
def matchre(data, *args):
	for regstr in args:
		matchObj = re.search(regstr + '.*', data, re.M | re.I)
		if matchObj:
			print(matchObj.group(0).lstrip().rstrip())
		else:
			print("No ", regstr, "found")

filename = input("Enter the path for email header file:");
fo = open(filename, "r")
data = fo.read()
matchre(data, "MIME-version", "Date:", "Subject:","Delivered-to:","From:","^to:")
fo.close()