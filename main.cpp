#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<vector<int>> create_graph_matrix()
{
    int n, m;
    cout << "n, m: ";
    cin >> n >> m;
    int u, v;

    vector< vector<int> > Arr(n+1, vector<int>(n+1));

    for (int i = 1; i <= m; i++)
    {
        cout << i << ") " << "u, v: ";
        cin >> u >> v;

        Arr[u][v] = 1;
        Arr[v][u] = 1;
    }

    return Arr;
}

vector<vector<int>> create_graph_list()
{
    int n, m;
    cout << "n, m: ";
    cin >> n >> m;
    int u, v;

    vector< vector<int> > Arr(n+1);

    for (int i = 1; i <= m; i++)
    {
        cout << i << ") " << "u, v: ";
        cin >> u >> v;

        Arr[u].push_back(v);
        Arr[v].push_back(u);
    }

    return Arr;
}

vector<vector<int>> create_graph()
{
    int n, m;
    cout << "n, m: ";
    cin >> n >> m;
    n++;
    m++;
    int u, v;

    vector< vector<int> > Arr(m, vector<int>(2));

    for (int i = 1; i < m; i++)
    {
        cout << i << ") " << "u, v: ";
        cin >> u >> v;

        Arr[i][0] = u;
        Arr[i][1] = v;
    }

    return Arr;
}

void print(const vector< vector<int> >& Matrix)
{
    for (int i = 1; i < Matrix.size(); i++)
    {
        cout << '[' << Matrix[i][0] << ", " << Matrix[i][1] << ']' << endl;
    }
}

int main()
{

    print(create_graph());

    return 0;   
}
