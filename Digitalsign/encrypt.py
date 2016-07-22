
import hashlib

def genhash(fname):
	#fname = input("Please enter file name : ")
	fd = open(fname,'r')
	org_hash = hashlib.sha256((fd.read()).encode('utf-8')).hexdigest()
	fd.close()
	return org_hash

def encrypt(h):
	en = ""
	for i in h:
		if i=="":
			en = en + (i)
		else:
			en = en + chr(ord(i) + 10)

	return en


def main():

	print("======Encryptor======")
	fname = input("Please enter file name : ")
	org_hash = genhash(fname)
	
	print("Hash value : " + str(org_hash))

	sign = open("dsign","w")

	#sign.write("Digital signature\n")
	sign.write(fname)

	en = encrypt(org_hash)

	sign.write("\n")
	sign.write(en)
	sign.close()

main()

