try:
	n=int(input())
	flag=0
	for j in range(2,int(n/2)+1):
		if n%j ==0:
			flag=1
			break
	if flag==0:
		print('prime')
	else :
		print('not prime')
except:
	print('invalid')
