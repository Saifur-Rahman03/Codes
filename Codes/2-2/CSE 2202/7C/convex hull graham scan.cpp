#include <iostream>
#include <stack>
#include <cstdlib>
#include <fstream>

using namespace std;
int complexity = 0;
struct Point
{
	int x, y;
};

Point p0;

Point nextToTop(stack<Point> &S);
void swapPoint(Point &p1, Point &p2);
int distanceSquare(Point p1, Point p2);
int orientation(Point p, Point q, Point r);
int compare(const void *vp1, const void *vp2);
void convexHullGrahamScan(Point points[], int n);


int main()
{
	ifstream fin;
	fin.open("random_points.txt");
	while(!fin.eof()) {
		int n;
		fin >> n;
		Point points[n];
		for(int i = 0; i < n; i++)
			fin >> points[i].x >> points[i].y;
		cout << "convex hull points (graham scan algorithm):\n";
		convexHullGrahamScan(points, n);
		cout << complexity << endl;

	}
	return 0;
}


Point nextToTop(stack<Point> &S)
{
	Point p = S.top();
	S.pop();
	Point res = S.top();
	S.push(p);
	return res;
}

void swapPoint(Point &p1, Point &p2)
{
	Point temp = p1;
	p1 = p2;
	p2 = temp;
}

int distanceSquare(Point p1, Point p2)
{
	return((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int orientation(Point p, Point q, Point r)
{
	int val = (q.y - p.y) * (r.x - q.x) - (r.y - q.y) * (q.x - p.x);
		complexity++;
	if(val == 0)
		return 0;
	return (val > 0) ? 1 : 2;

}

int compare(const void *vp1, const void *vp2)
{
	Point *p1 = (Point *)vp1;
	Point *p2 = (Point *)vp2;

	int o = orientation(p0, *p1, *p2);
	if(o == 0)
		return( distanceSquare(p0, *p2) >= distanceSquare(p0, *p1)) ? -1 : 1;
	return (o == 2) ? -1 : 1;
}

void convexHullGrahamScan(Point points[], int n)
{
	//determining lowest point
	int ymin = points[0].y;
	int minimum= 0;

	for(int i = 1; i < n; i++){
		int y = points[i].y;
		if(y < ymin || (y == ymin && points[i].x < points[minimum].x)){
			ymin = points[i].y;
			minimum = i;
		}
	}

	swapPoint(points[0], points[minimum]);
	p0 = points[0];
	//sorting points according to their polar angle
	qsort(&points[1], n - 1, sizeof(Point), compare);

	int m = 1;
	for(int i = 1; i < n; i++){
		while(i < n- 1 && orientation(p0, points[i], points[i + 1]) == 0)
			i++;
		points[m] = points[i];
		m++;
	}

	//push points and pop them until you get counter clockwise rotation
	stack<Point> S;
	S.push(points[0]);
	S.push(points[1]);
	S.push(points[2]);

	for(int i = 3; i < m; i++){
		while(orientation(nextToTop(S), S.top(), points[i]) != 2)
			S.pop();
		S.push(points[i]);
	}

	while(!S.empty()){
		Point p = S.top();
		cout << "(" << p.x << ", " << p.y << ")\n";
		S.pop();
	}
}
