EX1
#include <iostream>
#include <string>
int main() {
    std::string name;
    int age;
    std::cin >> name;
    std::cin >> age;
    std::cout << "Name: " << name << ", Age: " << age;
    return 0;
}
EX2
#include <iostream>
int main() {
    long long a, b;
    std::cin >> a >> b;
    std::cout << (a + b);
    return 0;
}
EX3
#include <iostream>
#include <iomanip>
int main() {
    double g1, g2, g3;
    std::cin >> g1 >> g2 >> g3;
    double avg = (g1 + g2 + g3) / 3.0;
    std::cout << std::fixed << std::setprecision(2) << avg;
    return 0;
}
EX4
#include <iostream>
#include <iomanip>
int main() {
    double c;
    std::cin >> c;
    double F = c * 9.0/5.0 + 32.0;
    std::cout << std::fixed << std::setprecision(2) << F;
    return 0;
}
EX5
#include <iostream>
#include <iomanip>
#include <string>
int main() {
    std::string name;
    int qty;
    double price;
    std::cin >> name;
    std::cin >> qty;
    std::cin >> price;
    double total = qty * price;
    std::cout << name << " " << qty << " " << std::fixed << std::setprecision(2) << price
              << " -> Total: " << std::fixed << std::setprecision(2) << total;
    return 0;
}

EX6
#include <iostream>
#include <string>
int main() {
    std::string a, b, c;
    std::cin >> a >> b >> c;
    std::cout << c << " " << b << " " << a;
    return 0;
}



EX7
#include <iostream>
#include <iomanip>
#include <string>
int main() {
    std::string name;
    int qty;
    double unit;
    std::cin >> name;
    std::cin >> qty;
    std::cin >> unit;

    double total = qty * unit;
    std::cout << "Item" << std::endl;
    std::cout << name << std::endl;
    std::cout << "Price" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << unit << std::endl;
    std::cout << "Qty" << std::endl;
    std::cout << qty << std::endl;
    std::cout << "Unit" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << unit << std::endl;
    std::cout << "Total" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << total;
    return 0;
}


EX8
#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
    double r;
    std::cin >> r;
    const double pi = 3.141592653589793;
    double area = pi * r * r;
    double circum = 2.0 * pi * r;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Area: " << area << "\nCirc: " << circum;
    return 0;
}



EX9
#include <iostream>
#include <iomanip>
int main() {
    double s1, s2, s3, s4, s5;
    std::cin >> s1 >> s2 >> s3 >> s4 >> s5;
    double avg = (s1 + s2 + s3 + s4 + s5) / 5.0;
    std::cout << std::fixed << std::setprecision(2) << avg << "%";
    return 0;
}


EX10
#include <iostream>
#include <string>
#include <sstream>
int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    std::string w;
    int count = 0;
    while (iss >> w) ++count;
    std::cout << count;
    return 0;
}

ex11
#include <iostream>
#include <limits>
int main() {
    long long x, mn = LLONG_MAX, mx = LLONG_MIN;
    for (int i = 0; i < 5; ++i) {
        std::cin >> x;
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }
    std::cout << mn << " " << mx;
    return 0;
}

EX12
#include <iostream>
#include <iomanip>
int main() {
    double w, h;
    std::cin >> w >> h;
    double bmi = w / (h * h);
    std::cout << std::fixed << std::setprecision(2) << bmi;
    return 0;
}


EX13
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

int main() {
    using namespace std;

    int n;
    if(!(cin >> n)) return 0;

    vector<string> name(n);
    vector<double> price(n);

    for(int i = 0; i < n; ++i) {
        cin >> name[i] >> price[i];
    }

    cout << left << setw(20) << "Item" << right << "Price" << "\n";
    cout << string(30, '-') << "\n";

    double grand = 0;
    for(int i = 0; i < n; ++i) {
        cout << left << setw(20) << name[i]
             << fixed << setprecision(2) << price[i] << "\n";
        grand += price[i];
    }

    cout << "Grand Total: " << fixed << setprecision(2) << grand << "\n";
    return 0;
}


EX14
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if(!(cin >> n)) return 0;

    vector<string> name(n);
    vector<double> price(n);
    for(int i=0;i<n;++i){
        cin >> name[i] >> price[i];
    }

    cout << left << setw(20) << "Item" << right << "Price" << "\n";
    cout << string(30, '-') << "\n";

    double grand = 0;
    for(int i=0;i<n;++i){
        cout << left << setw(20) << name[i]
             << fixed << setprecision(2) << price[i] << "\n";
        grand += price[i];
    }
    cout << "Grand Total: " << fixed << setprecision(2) << grand << "\n";
    return 0;
}
EX15
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if(!(cin >> n)) return 0;
    double total = 0;
    for(int i=0;i<n;++i){
        double x; 
        cin >> x;
        total += x;
    }
    double avg = n ? total / n : 0.0;
    cout << "Total: " << fixed << setprecision(2) << total << "\n";
    cout << "Average: " << fixed << setprecision(2) << avg << "\n";
    return 0;
}

EX16
#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    int i;
    double d;
    if(!(cin >> c >> i >> d)) return 0;
    cout << fixed << setprecision(3);
    cout << "Char: " << c << " Int: " << i << " Double: " << d << "\n";
    return 0;
}

EX17
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s;
    if(!(cin >> s)) return 0;
    long long hh = s/3600;
    long long mm = (s%3600)/60;
    long long ss = s%60;
    cout << setw(2) << setfill('0') << hh << ":"
         << setw(2) << setfill('0') << mm << ":"
         << setw(2) << setfill('0') << ss << "\n";
    return 0;
}

EX18
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if(!(cin >> n)) return 0;
    vector<string> name(n);
    vector<double> mark(n);
    for(int i=0;i<n;++i){
        cin >> name[i] >> mark[i];
    }

    cout << left << setw(20) << "Name" << "Mark" << "\n";
    cout << string(28, '-') << "\n";
    double sum = 0;
    for(int i=0;i<n;++i){
        cout << left << setw(20) << name[i]
             << fixed << setprecision(1) << mark[i] << "\n";
        sum += mark[i];
    }
    cout << "Average: " << fixed << setprecision(1) << (n? sum/n : 0.0) << "\n";
    return 0;
}

EX19
#include <bits/stdc++.h>
using namespace std;

double gpa_for(int s){
    
    if(s>=90) return 4.0;
    if(s>=80) return 3.0;
    if(s>=70) return 2.0;
    if(s>=60) return 1.0;
    return 0.0;
}

int main(){
    int n;
    if(!(cin >> n)) return 0;
    double totalGpa = 0;
    for(int i=0;i<n;++i){
        char c;
        int s;
        cin >> s; 
        totalGpa += gpa_for(s);
    }
    double avg = n ? totalGpa/n : 0.0;
    cout << "Average GPA: " << fixed << setprecision(2) << avg << "\n";
    return 0;
}
EX20

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if(!(cin >> n)) return 0;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> names;
    vector<string> cities;
    vector<int> ages;
    for(int i=0;i<n;++i){
        string line;
        getline(cin, line);
        stringstream ss(line);
        string nm, city;
        int age;
        ss >> nm >> city >> age;
        names.push_back(nm);
        cities.push_back(city);
        ages.push_back(age);
    }
    cout << "Name\tCity\tAge\n";
    for(size_t i=0;i<names.size();++i){
        cout << names[i] << "\t" << cities[i] << "\t" << ages[i] << "\n";
    }
    return 0;
}



EXTQWENTYONE
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}

EX22
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n > 0)
        cout << "Positive";
    else if (n < 0)
        cout << "Negative";
    else
        cout << "Zero";
    return 0;
}

EX23
#include <iostream>
using namespace std;
int main() {
    int g;
    cin >> g;
    if (g >= 60)
        cout << "Pass";
    else
        cout << "Fail";
    return 0;
}


EX24
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a >= b)
        cout << a;
    else
        cout << b;
    return 0;
}


EX25

#include <iostream>
using namespace std;
int main() {
    int y;
    cin >> y;
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        cout << "Leap Year";
    else
        cout << "Not Leap Year";
    return 0;
}


EX26
#include <iostream>
using namespace std;
int main() {
    int g;
    cin >> g;
    if (g >= 90) cout << "A";
    else if (g >= 80) cout << "B";
    else if (g >= 70) cout << "C";
    else if (g >= 60) cout << "D";
    else cout << "F";
    return 0;
}


EX27
#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << "Valid";
    else
        cout << "Invalid";
    return 0;
}


EX28
#include <iostream>
using namespace std;
int main() {
    double x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "Origin";
    else if (x == 0)
        cout << "Y-Axis";
    else if (y == 0)
        cout << "X-Axis";
    else if (x > 0 && y > 0)
        cout << "Q1";
    else if (x < 0 && y > 0)
        cout << "Q2";
    else if (x < 0 && y < 0)
        cout << "Q3";
    else
        cout << "Q4";

    return 0;
}


EX29
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double units, cost;
    cin >> units;

    if (units <= 100)
        cost = units * 0.5;
    else if (units <= 200)
        cost = 100 * 0.5 + (units - 100) * 0.75;
    else
        cost = 100 * 0.5 + 100 * 0.75 + (units - 200) * 1.2;

    cost += cost * 0.05; // 5% tax
    cout << fixed << setprecision(2) << cost;
    return 0;
}


EX30

#include <iostream>
using namespace std;
int main() {
    int age;
    cin >> age;

    if (age < 13)
        cout << "Child";
    else if (age <= 19)
        cout << "Teen";
    else if (age <= 60)
        cout << "Adult";
    else
        cout << "Senior";

    return 0;
}


