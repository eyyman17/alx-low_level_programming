#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) x

int main()
{
#if ABS(x) < 0
	x = (-x)
#endif
}

#endif
