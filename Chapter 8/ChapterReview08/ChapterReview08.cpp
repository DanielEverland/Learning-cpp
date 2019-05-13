// ChapterReview08.cpp 

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

template <typename T>
T larger(const T& a, const T& b);

template <> box larger<box>(const box& a, const box& b)
{
	a.volume > b.volume ? a : b;
}