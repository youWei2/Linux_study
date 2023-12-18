int mystrcmp(const char* str1, const char* str2)
{
	assert((str1 != NULL) && (str2 != NULL));
	int ret = 0;
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str2)
	{
		str1++;
		str2++;
	}
	if (ret > 0)
		ret = 1;
	else if (ret < 0)
		ret = -1;
	return ret;
}
