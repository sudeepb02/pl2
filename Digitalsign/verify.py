
import hashlib

def genhash(fname):
	fd = open(fname,'r')
	org_hash = hashlib.sha512(fd.read()).hexdigest()
	fd.close()
	return org_hash

fname = raw_input("Please enter file name : ")
#org_hash = genhash(fname)

sigfile = open("dsign","r")
temp = sigfile.readline().split()
temp = sigfile.readline().split()
print("Verifying digital signature for "+str(temp))

new_hash = genhash(temp)

temp = sigfile.read.splitlines()

if temp==new_hash:
	print("Digital signature verified successfully\n")
else:
	print("Digital signature incorrect. File is tampered\n")

