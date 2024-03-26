
int getSerialNumber(void)
{
	static int count = 0;		//전역변수인데 특정함수 하나만 사용할 시
	++count;
	
	return count;

}
