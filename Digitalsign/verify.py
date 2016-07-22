
import hashlib

def genhash(fname):
	fd = open(fname,'r')
	org_hash = hashlib.sha256((fd.read()).encode('utf-8')).hexdigest()
	fd.close()
	return org_hash

def decrypt(temp):
	data = ""
	for i in temp:
		if i=="":
			data = data + ""
		else:
			data = data + chr(ord(i)-10)
	return data

def main():

	#fname = input("Please enter file name : ")
	#new_hash = genhash(fname)

	sigfile = open("dsign","r")
	l  = sigfile.readlines()
	temp = l[0].split("\n",1)[0]
	new_hash = genhash(temp)
	decr_hash = decrypt(l[1])

	if decr_hash==new_hash:
		print("Digital signature verified successfully\n")
		print("Hash value : " + str(new_hash))
	else:
		print("Digital signature incorrect. File is tampered\n")
		print("Original hash value : " + str(decr_hash)+ "\n")
		print("Generated hash value : " + str(new_hash) + "\n")

main()
