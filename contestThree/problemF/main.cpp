#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int faces = 0;

    for (int i = 0; i < n; i++) {
        string polyhedron;
        cin >> polyhedron;

        if (polyhedron == "Tetrahedron") {
            faces += 4;
        } else if (polyhedron == "Cube") {
            faces += 6;
        } else if (polyhedron == "Octahedron") {
            faces += 8;
        } else if (polyhedron == "Dodecahedron") {
            faces += 12;
        } else if (polyhedron == "Icosahedron") {
            faces += 20;
        }
    }

    cout << faces << "\n";
}