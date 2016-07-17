
import hashlib

def genhash(fname):
	#fname = input("Please enter file name : ")
	fd = open(fname,"r")
	org_hash = hashlib.sha512(fd.read()).hexdigest()
	fd.close()
	return org_hash

def encrypt(h):
	return


fname = input("Please enter file name : ")
org_hash = genhash(fname)

sign = open("dsign","w")

sign.write("Digital signature\n")
sign.write(str(fname)+"\n")
sign.write(str(org_hash+"\n"))

sign.close()


