//============================================================================
// Name        : Ch4_Ex01.cpp
// Author      : Charles Carper
// Copyright   : 3.12.15
// Description : Election
//============================================================================

#include <vector>
#include <utility>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

struct Candidate
{
    string name;
    int vote;
    double percent;
};

istream& operator>>(istream& is, Candidate& c)
{
    return is >> c.name >> c.vote;
}

ostream& operator<<(ostream& os, const Candidate& c)
{
    return os << setprecision(4)<<std::setw(17) << std::left << c.name << setw(15)<< std::right<<c.vote<< "\t"<< std::right<<c.percent <<  '\n';
}

bool operator<(const Candidate& lhs, const Candidate& rhs)
{
    return lhs.vote < rhs.vote;
}

int main()
{
    // User enters the number of candidates
    int n= 5;
    vector<Candidate> data(n);

    // User enters the names and the number of votes all at once.
    cout << "Enter a candidate name and the votes received by that candidate: \n";
    int total = 0;
    for (int i = 0; i < data.size(); ++i) // User types in the name and number of votes
    {
        cin >> data[i];
        total += data[i].vote;
    }

    for (int i = 0; i < data.size(); ++i) // Calculates percentage votes
    {
        data[i].percent = 100.0 * data[i].vote / total;
    }

    // displays the headings and each one of those headings is tabbed over
    cout<<endl;
    cout<<"Candidate"<<setw(20)<<"Votes Received"<<setw(21)<<"% of  Total votes"<<endl;
    cout << "---------"<<setw(20) << "--------------"<<setw(20)<<"----------------"<< '\n';

    for (int i = 0; i < data.size(); i++) // displays the name, the number of votes they got and the percentage
    {
        cout << data[i];
    }
    cout<<setw(21)<< "-----"<<endl;
    cout<<"Total Votes"<<setw(10)<<total<<endl; // the grand total of all the candidates votes

    Candidate m = *max_element(data.begin(), data.end());

    // displays the winner of the election
    cout << endl << "The Winner of the Election  ---> " << m.name << "."<<endl;
    cout << endl;
    cout << "End of Program.";
}
