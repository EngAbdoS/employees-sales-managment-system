#include <iostream>
#include<vector>
#include<string>
using namespace std;


//###### eng Abdel_Rahman Swidan##########
//###### eng Abdel_Rahman Yahia ##########




string fun,employee_n,fn,ln,ci,ti, f, name, m, enter, ne, ns, nm;
int x, y, z, i, p,in;





class Employees_details 
{
	
public:
	vector <string>employee_fname{ "abdo","aboood", "medo","khaled", "mohsen" };
	vector <string>employee_lname{ "Swidan","Abdala", "Esa","MOstafa", "Amr" };
	vector <string>employee_title{"CEO" ,"Manager", "saler","saler", "Accountant"};
	vector <string>employee_city{ "Mansoura","Alex", "Ismalia","Cairo", "Cairo" };
  

	//#######################################################################

	vector<string>xx{ "washer","fridge","cooker","microwave","blender" };
	vector<string>yy{ "Nike shose"," Adidas shose","pouma shose" };
	vector<string>zz{ "nokia","sumsung","iphon" };
	vector<string>xn{ "100","20","50","30","70" };
	vector<string>yn{ "10","208","52","3135","77" };
	vector<string>zn{ "200","201","503","340","780" };

};



class Employees :public Employees_details
{



public:



	void Owner()
	{

		cout << "####################################################\n\n"
			<< "- If you want to view employees list enter \"el\"\n\n"
			<< "- If you want to add employee enter \"ae\"\n\n"
			<< "- If you want to view sales enter \"s\" :-\n\n ";
		cin >> fun;
		

		if (fun == "el") {

			employees();

		}
		else 	if (fun == "ae") {

			add();

		}
		else 	if (fun == "s") {

			sales ();
		}





	}
	void add_d() {

		cout << "Last name :-\n";
		cin >> ln;
		employee_lname.insert(employee_lname.end(), ln);
		cout << "Title :-\n";
		cin >> ti;
		employee_title.insert(employee_title.end(), ti);
		cout << "City :-\n";
		cin >> ci;
		employee_city.insert(employee_city.end(), ci);
		cout << "  Successfully added !\n\n";
		more_opr();

	}


	void employees_details(int i) {
		cout << "  First Name :- ";
		if (i < employee_fname.size())
			cout << employee_fname[i]
			<< endl;
		else cout << "  Data not found ! \n";
		
		cout << "  Last Name :- ";
		if (i < employee_lname.size())
			cout << employee_lname[i]
			<< endl;
		else cout << "  Data not found ! \n";
		cout << "  Title :- ";
		if (i < employee_title.size())
			cout << employee_title[i]
			<< endl;
		else cout << "  Data not found ! \n";

		cout << "  City :- ";
		if (i < employee_title.size())
        cout<< employee_city[i]
			<< endl;
		else cout << "  Data not found ! \n";

	}

	void add() {
		cout << "  Enter employee first name plz...\n";
		cin >> employee_n;
		employee_fname.insert(employee_fname.end(), employee_n);
		 cout<<"  Successfully added !\n\n"

			 << "  If you want to add his details enter \"Y\" else \"N\" :-\n";
		 cin >> f;
		 if (f == "y") { add_d(); }
		 else {
			 cout << "  If you want to add another employee enter \"Y\" else \"N\" :-\n";
			 cin >> f;
			 if (f == "y") { add(); }
			 else {
				 more_opr();
			 }
			
		 }

	}
	



	void more_opr() {
		cout << "  If you want to do another operation enter \"Y\" else \"N\" :-\n";
		cin >> m;
		if (m == "y") {

			Owner();


		}
		else cout << "Thanks !";

	}
	
	void want_detail() {
		cout << "  If you want to view an employee details enter \"Y\" else \"N\" :-\n";
		cin >> f;
		if (f == "y") { detail(); }
		else {
			more_opr();
		}

	}

	void detail() {
		cout << "  Enter his name :-\n";
		cin >> name;
		for (int i = 0; i < employee_fname.size(); i++) {
			if (employee_fname[i] == name) { employees_details (i); want_detail(); break; }
		    if (i == employee_fname.size() - 1) {
				cout << "  Name not found !\n";
				detail();
			}


		}


	}



	void employees() {
		cout << "  Employees list :-\n";
		for (auto it : employee_fname)cout <<"~ "<< it << endl;
		want_detail();



	};

	//##########################################################################


	void sales() {

		cout << "can you choos \n"
			"electric machines (e) \n"
			"sport shoes (s)     \n"
			"mobiles (m) \n"
			"enter new product (n)\n"
			<< endl;
		cin >> enter;
		if (enter == "e")
			get_e();
		if (enter == "s")
			get_s();
		if (enter == "m")
			get_m();
		if (enter == "n")
			get_n();

	}

	

	void get_e() {
	s:
		for (int i = 0; i < xx.size(); i++)
			cout << i + 1 << ")" << xx[i] << endl;
		cout << "you want see price enter number\n";
		cin >> p;
		cout << xn[p - 1];


		cout << endl;
		cout << "If you want see the list agian \"Y\" else \"N\" :-\n";
		cin >> f;
		if (f == "y")
			goto s;
		else
			qs();

	}

	void get_s() {
	l:
		for (int i = 0; i < yy.size(); i++)
			cout << i + 1 << ")" << yy[i] << endl;
		cout << "you want see price enter number\n";
		cin >> p;
		cout << yn[p - 1];

		cout << endl;
		cout << "If you want see the list agian \"Y\" else \"N\" :-\n";
		cout << endl;
		cin >> f;
		if (f == "y")
			goto l;
		else
			qs();

	}

	

	void  get_m() {
	k:
		for (int i = 0; i < zz.size(); i++)
			cout << i + 1 << ")" << zz[i] << endl;
		cout << "you want see price enter number\n";
		cin >> p;
		cout << yn[p - 1];
		cout << endl;
		cout << "If you want see the list agian \"Y\" else \"N\" :-\n";
		cout << endl;
		cin >> f;
		if (f == "y")
			goto k;
		else
			qs();
	}




	void get_n() {
	v:
		cout << "you want enter new product in \n"
			"electric machines (e) \n"
			"sport shoes (s)     \n"
			"mobiles (m) \n" << endl;
		cin >> enter;
		if (enter == "e") {
			cout << "write the new prodect \n";
			cin >> ne;
			xx.insert(xx.end(), ne);
			for (int i = 0; i < xx.size(); i++)
				cout <<  i + 1 << ")" <<xx[i] << endl;
		}





		if (enter == "s") {
			cout << "write the new prodect \n";
			cin >> ns;
			yy.insert(yy.end(), ns);
			for (int i = 0; i < yy.size(); i++)
				cout << i + 1 << ")" << yy[i] << endl;
		}


		if (enter == "m") {
			cout << "write the new prodect \n";
			cin >> nm;
			zz.insert(zz.end(), nm);
			for (int i = 0; i < zz.size(); i++)
				cout << i + 1 << ")" << zz[i] << endl;
		}
		cout << "If you want see the list agian \"Y\" else \"N\" :-\n";
		cin >> f;
		if (f == "y")
			goto v;
		else
			qs();
	}




	void qs() {
		cout << "If you want to do another operation enter \"Y\" else \"N\" :-\n";
		cout << endl;
		cin >> m;
		if (m == "y")
			sales();
		else
			cout << "thank you\n";
	}




};










int main()
{
	Employees come;
	come.Owner();
	


	
	return 0;
}














