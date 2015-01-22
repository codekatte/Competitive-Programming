def expo(a,b,c):
	r=1
	p=a
	while b>0:
		if(b%2 == 1):
			r=(r*p)%c
		p=(p*p)%c
		b=b/2
	return r

def main():
	t = input()
	p = 1298074214633706835075030044377087
	for x in range(0,t):
		a = input();
		c = expo(2,a+1,p)
		c=c-1
		print c
if __name__ == "__main__": main() 
