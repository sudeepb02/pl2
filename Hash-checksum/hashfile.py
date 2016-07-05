
import hashlib


choice = int(raw_input("1. Image file \n 2. Audio/Video file "))
org_file = raw_input("Please enter file name 1 : ")
new_file = raw_input("Please enter file name 2 : ")

if(choice==1):
	org_hash =  hashlib.md5(open(org_file,'r').read()).hexdigest()
	print "MD5 hash of original file : " + str(org_hash)

	new_hash = hashlib.md5(open(new_file,'r').read()).hexdigest()
	print "MD5 hash of new file :  " + str(new_hash)

	if org_hash == new_hash:
		print "The files are same"
	else:
		print "Files have been altered "
else:
	org_hash = hashlib.sha224(open(org_file,'r').read()).hexdigest()
	print "SHA-2 of original file : " + str(org_hash)

	new_hash = hashlib.sha224(open(new_file,'r').read()).hexdigest()
	print "SHA-2 of new file : " + str(new_hash)

	if org_hash == new_hash:
		print "The files are same"
	else:
		print "Files have been altered"


