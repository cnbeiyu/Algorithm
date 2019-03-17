#include <iostream>
//未完成
using namespace std;
int main(int argc, char const *argv[])
{
	int a, b, c, d, e, f, g, h, ans1, ans2, ans3, ans4;
	for (int a = 1; a < 14; ++a)
	{
		for (int b = 1; b < 14 ; ++b)
		{
			if (b != a)
			{
				ans1 = a + b;
				for (int c = 1; c < 14; ++c)//算式1确定
				{
					if (c != a && c != b && c != ans1)
					{
						for (int d = 1; d < 14; ++d)
						{
							if (d != a && d != b && d != ans1 && d != c)
							{
								ans2 = c - d;
								for (int e = 1; e < 14; ++e)//算式2确定
								{
									if (e != a && e != b && e != c && e != d && e != ans1 && e != ans2)
									{
										if (f != a && f != b && f != c && f != d && f != e && f != ans1 && f != ans2)
										{
											ans3 = e * f;
											for (int g = 1; g < 14; ++g) //算式3确定
											{
												if (g != a && g != b && g != c && g != d && g != e && g != f && g != ans1 && g != ans2 && g != ans3)
												{
													if (h != a && h != b && h != c && h != d && h != e && h != f && h != ans1 && h != ans2 && h != ans3 && h != g)
													{
														for (int ans4 = 1; ans4 < 14; ++ans4)
														{
															// cout << "xx" << endl;
															if ((ans4 == g / h) && ans4 != a && ans4 != b && ans4 != c && ans4 != d && ans4 != e && ans4 != f && ans4 != ans1 && ans4 != ans2 && ans4 != ans3 && ans4 != g && ans4 != h)
															{
																cout << a << "+" << b << "=" << ans1 << endl;
																cout << c << "-" << d << "=" << ans2 << endl;
																cout << e << "*" << f << "=" << ans3 << endl;
																cout << g << "/" << h << "=" << ans4 << endl;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}