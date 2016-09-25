import os

#Recover files from sda4 since 2 days ago
os.system("sudo ntfsundelete /dev/sda4 -t 2d")
ch = raw_input("Enter inode number of file to be recovered : ")

#Undelete file with inode no. ch and store in recov directory
os.system("mkdir -p /home/sudeep/recov")
ret = os.system("sudo ntfsundelete /dev/sda4 -u -i " + ch + " -d /home/sudeep/recov")

if(ret==0):
	print("File recovered successfully")
else:
	print("Error recovering file. Exit status  " + ret)
	
os.system("ls -l /home/sudeep/recov")

