#pragma once
using namespace std;
struct point
{
    char data;
    point* left;
    point* right;
};
point* first(char d)
{
	point* p = new point;
	p->data = d;
	p->left = 0;
	p->right = 0;
	return p;
}
point* Add(point* p, char d)
{
	if (p == NULL)
	{
		p = new point;
		p->data = d;
		p->left = NULL;
		p->right = NULL;
	}
	else if (d < p->data)
	{
		p->left = Add(p->left, d);
	}
	else
	{
		p->right = Add(p->right, d);
	}
	return p;
}
point* Tree(int n, point* p)
{
	point* r;
	int nl, nr;
	if (n == 0) { p = NULL;return p; }
	nl = n / 2;
	nr = n - nl - 1;
	r = new point;
	cout << "Ââåäèòå ýëåìåíò äåðåâà: ";
	cin >> r->data;
	r->left = Tree(nl, r->left);
	r->right = Tree(nr, r->right);
	p = r;
	return p;
}
void addToArray(point* p, char* a, size_t& i)
{
	a[i++] = p->data;
	if (p->left) 
	{ 
		addToArray(p->left, a, i);
	}
	if (p->right) 
	{ 
		addToArray(p->right, a, i); 
	}
}
int High(point* p)
{
	int l, r, h = 0;
	if (p)
	{
		l = High(p->left);
		r = High(p->right);
		h = ((l > r) ? l : r) + 1;
	}
	return h;
}
void DestroyTree(point* p) 
{
	if (p != NULL) 
	{
		DestroyTree(p->left);
		DestroyTree(p->right);
		delete(p);
	}
}
void Run(point* p, int n, int q)
{
	if (p)
	{
		Run(p->right, n + 1, q);
		for (int i = q;i < n;i++)
		{
			cout << "      ";
		}
		cout << "(" << p->data << ")" << "\n";
		Run(p->left, n + 1, q);
	}
	cout << "\n";
}
