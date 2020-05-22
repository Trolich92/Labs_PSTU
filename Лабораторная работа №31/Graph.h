#pragma once
#include <glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int WinW, WinH;
int maxSize = 20;
template <class T>
class Graph
{
	int adjMatrix[20][20] = { 0 };
	vector<T> vertList;
public:
	Graph();
	~Graph();
	int GetVertPos(const T& vertex);
	bool IsEmpty();
	bool IsFull();
	int GetAmountVerts();
	int GetAmountEdges();
	int GetWeight(const T& vertex1, const T& vertex2);
	vector<T> GetNbrs(const T& vertex);
	void InsertVertex(const T& vertex);
	void InsertEdge(const T& vertex1, const T& vertex2, int weight);
	void Print();
	void DrawGraph();
};

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight)
{
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1))
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->adjMatrix[vertPos1][vertPos2] != 0
			&& this->adjMatrix[vertPos2][vertPos1] != 0)
		{
			cout << "Ðåáðî ìåæäó âåðøèíàìè óæå åñòü" << endl;
			return;
		}
		else
		{
			this->adjMatrix[vertPos1][vertPos2] = weight;
			this->adjMatrix[vertPos2][vertPos1] = weight;
		}
	}
	else
	{
		cout << "Îáåèõ âåðøèí (èëè îäíîé èç íèõ) íåò â ãðàôå " << endl;
		return;
	}
}

template<class T>
void Graph<T>::Print()
{
	if (!this->IsEmpty())
	{
		cout << "Ìàòðèöà ñìåæíîñòè ãðàôà: " << endl;
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			cout << this->vertList[i] << " ";
			for (int j = 0; j < vertListSize; ++j)
			{
				cout << " " << this->adjMatrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Ãðàô ïóñò " << endl;
	}
}

template<class T>
void Graph<T>::InsertVertex(const T& vertex)
{
	if (!this->IsFull())
	{
		this->vertList.push_back(vertex);
	}
	else
	{
		cout << "Ãðàô óæå çàïîëíåí. Íåâîçìîæíî äîáàâèòü íîâóþ âåðøèíó " << endl;
		return;
	}
}

template<class T>
vector<T> Graph<T>::GetNbrs(const T& vertex)
{
	vector<T> nbrsList; // ñîçäàíèå ñïèñêà ñîñåäåé
	int vertPos = this->GetVertPos(vertex); // âû÷èñëåíèå ïîçèöèè vertex â ìàòðèöå ñìåæíîñòè
	if (vertPos != (-1)) 
	{
		//ïðîâåðêà, ÷òî vertex åñòü â ìàòðèöå ñìåæíîñòè
			for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
			{
				if (this->adjMatrix[vertPos][i] != 0 &&
					this->adjMatrix[i][vertPos] != 0) // âû÷èñëåíèå ñîñåäåé

					nbrsList.push_back(this->vertList[i]); //çàïèñü ñîñåäåé â âåêòîð

			}
	}
	return nbrsList; //âîçâðàò ñïèñêà ñîñåäåé
}

template<class T>
int Graph<T>::GetWeight(const T& vertex1, const T& vertex2)
{
	if (!this->IsEmpty())
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		return adjMatrix[vertPos1][vertPos2];
	}
	return 0;
}

template<class T>
int Graph<T>::GetAmountEdges()
{
	int amount = 0; // îáíóëÿåì ñ÷åò÷èê
	if (!this->IsEmpty())
	{ // ïðîâåðÿåì, ÷òî ãðàô íå ïóñò
		for (int i = 0, vertListSize = this->vertList.size();
			i < vertListSize; ++i)
		{
			for (int j = 0; j < vertListSize; ++j)
			{
				if (this->adjMatrix[i][j] ==
					this->adjMatrix[j][i] &&
					this->adjMatrix[i][j] != 0) // íàõîäèì ð¸áðà
					amount += 1; // ñ÷èòàåì êîëè÷åñòâî ð¸áåð
			}
		}
		return (amount / 2); // ïðèâîäèì ñ÷åò÷èê ê êîððåêòíîìó ðåçóëüòàòó è âîçâðàùàåì åãî
	}
	else
		return 0; // åñëè ãðàô ïóñò, âîçâðàùàåì 0
}

template<class T>
int Graph<T>::GetAmountVerts()
{
	return this->vertList.size();
}

template<class T>
bool Graph<T>::IsFull()
{
	return (vertList.size() == maxSize);
}

template<class T>
bool Graph<T>::IsEmpty()
{
	if (this->vertList.size() != 0)
		return false;
	else
		return true;
}

template <class T>
int Graph<T>::GetVertPos(const T& vertex)
{
	for (int i = 0; i < this->vertList.size(); ++i) 
	{
		if (this->vertList[i] == vertex)
			return i;
	}
	return -1;
}

template<class T> //îáúÿâëåíèå øàáëîíà ñ ôîðìàëüíûì ïàðàìåòðîì êëàññ Ò
Graph<T>::Graph() //êîíñòðóêòîð, êîòîðûé èíèöèàëèçèðóåò çíà÷åíèÿ îáúåêòîâ êëàññà Graph
{
	//ïåðåáîð ñòðîê è ñòîëáöîâ ìàòðèöû ñìåæíîñòè è çàïîëíåíèå å¸ íóëÿìè
	for (int i = 0; i < maxSize; ++i) 
	{
		for (int j = 0; j < maxSize; ++j) 
		{
			this->adjMatrix[i][j] = 0;
		}
	}
}

template<class T>
Graph<T>::~Graph()
{

}

Graph<int> graph;

Graph<int> makeGraph()
{
	Graph<int> graph; // ñîçäàíèå ãðàôà, ñîäåðæàùåãî âåðøèíû ñ íîìåðàìè öåëîãî òèïà
	int amountVerts, amountEdges, sourceVertex, targetVertex, edgeWeight; // ñîçäàíèå íåîáõîäèìûõ äëÿ ââîäà ãðàôà ïåðåìåííûõ
	cout << "Ââåäèòå êîëè÷åñòâî âåðøèí ãðàôà: "; cin >> amountVerts; cout << endl; // ââîä êîëè÷åñòâà âåðøèí ãðàôà â ïåðåìåííóþ amountVerts
	cout << "Ââåäèòå êîëè÷åñòâî ðåáåð ãðàôà: "; cin >> amountEdges; cout << endl; // ââîä êîëè÷åñòâà ð¸áåð ãðàôà â ïåðåìåííóþ amountEdges
	//int** adjMatrix = new int* [amountVerts];
	//for (int i = 0; i < amountVerts; i++)
	//	adjMatrix[i] = new int[amountVerts];
	for (int i = 1; i <= amountVerts; ++i) 
	{
		int* vertPtr = &i; // çàïîìèíàåì àäðåñ âåðøèíû ñ ïîìîùüþ óêàçàòåëÿ
		graph.InsertVertex(*vertPtr); //ïåðåäà¸ì ññûëêó íà âåðøèíó â ôóíêöèþ InsertVertex; ïðîèñõîäèò âñòàâêà âåðøèíû â âåêòîð âåðøèí
	}

	for (int i = 0; i < amountEdges; ++i)
	{
		cout << "Èñõîäíàÿ âåðøèíà: "; cin >> sourceVertex; cout << endl; // ââîä èñõîäíîé âåðøèíû
		int* sourceVertPtr = &sourceVertex; // çàïîìèíàåì àäðåñ èñõîäíîé âåðøèíû
		cout << "Êîíå÷íàÿ âåðøèíà: "; cin >> targetVertex; cout << endl; // ââîä âåðøèíû, äî êîòîðîé áóäåò èäòè ðåáðî îò èñõîäíîé âåðøèíû
		int* targetVertPtr = &targetVertex; // çàïîìèíàåì àäðåñ êîíå÷íîé âåðøèíû (äî êîòîðîé áóäåò èäòè ðåáðî îò èñõîäíîé âåðøèíû)

		cout << "Âåñ ðåáðà: "; cin >> edgeWeight; cout << endl; // ââîä ÷èñëîâîãî çíà÷åíèÿ âåñà ðåáðà â ïåðåìåííóþ edgeWeight
		graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight); // âñòàâêà ðåáðà âåñîì edgeWeight ìåæäó èñõîäíîé è êîíå÷íîé âåðøèíàìè
	}
	cout << endl;
	graph.Print();//ïå÷àòü ìàòðèöû ñìåæíîñòè
	return graph;
}

struct vertCoord
{
	int x, y;
};

vertCoord vertC[20];
int R;
void setCoord(int i, int n)
{
	int R_;
	int x0 = WinW / 2;
	int y0 = WinH / 2;
	if (WinW > WinH)
	{
		R = 5 * (WinH / 13) / n;
		R_ = WinH / 2 - R - 10;
	}
	else
	{
		R = 5 * (WinW / 13) / n;
		R_ = WinW / 2 - R - 10;
	}
	float theta = 2.0f * 3.1415926f * float(i) / float(n);
	float y1 = R_ * cos(theta) + y0;
	float x1 = R_ * sin(theta) + x0;

	vertC[i].x = x1;
	vertC[i].y = y1;
}

void drawCircle(int x, int y, int R) //ðèñóåì êðóã â çàäàííûõ êîîðäèíàòàõ
{
	glColor3f(1.0, 1.0, 1.0);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = R * cos(theta) + y;
		x1 = R * sin(theta) + x;;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = R * cos(theta) + y;
		x2 = R * sin(theta) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}
template <typename T>
string to_string(T val)
{
	ostringstream oss;
	oss << val;
	return oss.str();
}
void drawText(int nom, int x1, int y1)
{
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string s = to_string(nom);
	glRasterPos2i(x1 - 5, y1 - 5);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}

void drawVertex(int n)
{
	for (int i = 0; i < n; i++)
	{
		drawCircle(vertC[i].x, vertC[i].y, R);
		drawText(i + 1, vertC[i].x, vertC[i].y);
	}
}

void drawLine(int text, int x0, int y0, int x1, int y1) //ðåáðî íåîðèåíòèðîâàííûé âçâåøåííûé ãðàô
{
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();

	drawText(text, (x0 + x1) / 2 + 10, (y0 + y1) / 2 + 10);
}

template<class T>
void Graph<T>::DrawGraph()
{
	int n = vertList.size();
	for (int i = 0; i < n; i++)
	{
		setCoord(i, n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int a = adjMatrix[i][j];
			if (a != 0)
			{
				drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
			}
		}
	}
	drawVertex(n);
}

void reshape(int w, int h)
{
	WinW = w;
	WinH = h;
	glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
	glutPostRedisplay();
}

void display()
{
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, WinW, 0, WinH);
	glViewport(0, 0, WinW, WinH);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	graph.DrawGraph();

	glutSwapBuffers();
}
