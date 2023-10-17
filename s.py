import hashlib

flag=0

pass_h=input("enter hash:")
wordlist=input("Filename:")
try:
	pass_file=open(wordlist, 'r')
except:
	print("No file found")
	quit()

for word in pass_file:
	enc_wrd=word.encode('utf-8')
	digest=hashlib.md5(enc_wrd.strip()).hexdigest()

	if digest==pass_h:
		print('password exists')
		print("the password is"+word)
		flag=1
		break

if flag==0:
	print('p is not foubvh dfkvjdfnvkaf vkdjvnd')
input()