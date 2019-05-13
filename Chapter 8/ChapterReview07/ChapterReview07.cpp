// ChapterReview07.cpp

template <typename T1, typename T2>
auto max(const T1& a, const T2& b) -> decltype(a + b)
{
	return a > b ? a : b;
}