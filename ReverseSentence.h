#pragma once

void Reverse(char* begin,char* end)
{
	assert(begin);
	assert(end);
	while (begin < end)
	{
		char tmp = *begin;
		*begin = *end;
		*end = tmp;

		begin++;
		end--;
	}
}

void ReverseSentence(char* str)
{
	assert(str);
	char* begin = str;
	char* cur = str;
	while (*cur !='\0')
	{
		cur++;
	}

	cur--;
	char* end = cur;

	Reverse(begin, end);
	char* start = str;
	char* prev = str;
	while (*start != '\0')
	{
		if (*start == ' ')
		{
			Reverse(prev, start - 1);
			start++;
			prev = start;
		}
		else
		{
			start++;
		}
	}
}

void LeftRatateString(char* str,int n)
{
	if (str != NULL)
	{
		char* begin = str;
		char* end = str;
		while (*end != '\0')
		{
			end++;
		}
		end--;
		Reverse(begin, end);
		Reverse(begin, end - n);
		Reverse(end - n+1, end);
	}
}

void TestReverse()
{
	/*char pstr[] = "i am a student.";*/
	char pstr[] = "abcdef";
	/*ReverseSentence(pstr);*/
	LeftRatateString(pstr, 3);
	cout << pstr << endl;
}