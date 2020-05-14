#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
using namespace std;

const int MAX_TRIES=5;
int letterFill (char, string, string&);

int main ()
{
	string name;
	char letter;
	int num_of_wrong_guesses=0;
	string word;
	string countryname[] ={"india","nepal","iran","oman","chile","japan","ghana","greece","canada",
	                       "pakistan","malaysia","ethiopia","indonesia","georgia","germany","grenada",
                           "guatemala","guinea","netherlands","new zealand","cambodia","philippines",
                           "australia","central African Republic (CAR)","colombia"};

    string hollymovies[]={"avatar","batman","frozen","minions","jumanji","aladdin","avengers","baywatch",
                          "titanic","spiderman","jurassic world","black panther","iron man 3","toy story 3",
                          "finding dory","the dark night","alice in wonderland","finding dory","the lion king",
                          "the hobbit","the jungle book","finding nemo","star wars","harry potter","beauty and the beast"};

    string bollymovies[]={"Anand"," Drishya","Nayakan","Kahani","Gol Maal","Black","Guide","Pather","Aruvi","Panchali","Dangal",
                          "Black Friday","Ratsasan","Taare Zameen Par","3 Idiots","Gully Boy",
                           "Jaane Bhi Do Yaaro","Thalapathi"," Manichitrathazhu","Andhadhun",
                           "Chupke Chupke","Thani Oruvan","Uri: The Surgical Strike","Kannathil","Khosla Ka Ghosla"};

    string hollystars[]={"Morgan Freeman","Leonardo DiCaprio","Brad Pitt","Michael Caine","Robert De Niro","Matt Damon",
                         "Tom Hanks","Christian Bale","Gary Oldman","Al Pacino","Edward Norton","Harrison Ford",
                         "Johnny Depp","Cillian Murphy","Bruce Willis","Ralph Fiennes","Kevin Spacey","Jack Nicholson",
                         "Samuel L. Jackson","Robert Duvall","Philip Seymour Hoffman","Tom Hardy","Steve Buscemi"
                         "Mark Ruffalo","George Clooney"};

    string bollystars[]={"Kajol","Salman Khan","Akshay Kumar","Deepika Padukone","Aamir Khan","Amitabh Bachchan",
                          "Ranveer Singh","Ajay Devgn","AR Rahman","Alia Bhatt","Shah Rukh Khan","Rajinikanth",
                         "Varun Dhawan","Anushka Sharma","Ranbir Kapoor","Arijit Singh","Sanjay Dutt","Katrina Kaif",
                         "Kareena Kapoor","Karan Johar","Mahesh Babu","Sidharth Malhotra","Shraddha Kapoor","Priyanka Chopra",
                         "Aishwarya Rai"};

    string sports[]={"boxing","cycling","skiing","rowing","surfing","hockey","tennis","rafting","archery","cricket",
                     "kayaking","aerobics","basketball","canoeing","skibobbing","snorkeling","swimming",
                     "gymnastics","football","freediving","paddleboarding","scuba diving","synchronized swimming",
                     "bodybuilding","discus throw"};
	//choose and copy a word from array of words randomly


	// welcome the user
	cout << "\n\nWelcome to hangman"<<endl;

	cout << "You can choose from the following options:"<<endl;
	cout <<  "1. Name of Country"<<endl;
    cout <<  "2. Name of Hollywood movies"<<endl;
    cout <<  "3. Name of Bollywood movies"<<endl;
    cout <<  "4. Name of Hollywood stars"<<endl;
    cout <<  "5. Name of Bollywood stars"<<endl;
    cout <<  "6. Name of sport"<<endl;
    int st;
	cout<<"Enter your choice"<<endl;
	cin>>st;
	cout << "\n\nEach letter is represented by a star."<<endl;
	cout << "\n\nYou have to type only one letter in one try"<<endl;
	cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word."<<endl;
	cout << "\n~~~~~~~~~~~~~~~"<<endl;

switch(st)
{
    case 1:
 {
    cout<<"Guess Name of Country"<<endl;

    cout<<"choose your level:"<<endl;
    cout<<" 1. Level 1"<<endl;
    cout<<" 2. Level 2"<<endl;
    cout<<" 3. Level 3"<<endl;
    cin>>st;
    if(st==1)
    {
	srand(time(NULL));
	int n=rand()% 10;
	word=countryname[n];
	}

    if(st==2)
    {
        srand (time(NULL));
        int n=rand()%15;
        word=countryname[n];
    }

    if(st==3)
    {
        srand (time(NULL));
        int n=rand()%25;
        word=countryname[n];
	}

	// Initialize the secret word with the * character.
	string unknown(word.length(),'*');

	// Loop until the guesses are used up
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: "<<endl;
		cin >> letter;
		letter = tolower(letter);
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (word==unknown)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
    break;
    }
case 2:
  {

    cout<<"Guess Name of Hollywood movies"<<endl;
    cout<<"choose your level:"<<endl;
	cout<<" 1. Level 1"<<endl;
    cout<<" 2. Level 2"<<endl;
	cout<<" 3. Level 3"<<endl;
    cin>>st;

	if(st==1)
    {
	srand(time(NULL));
	int n=rand()% 10;
	word=hollymovies[n];
	}

    if(st==2)
    {
        srand (time(NULL));
        int n=rand()%15;
	    word=hollymovies[n];
    }

    if(st==3)
    {
        srand (time(NULL));
        int n=rand()%25;
	    word=hollymovies[n];

    }

	// Initialize the secret word with the * character.
	string unknown(word.length(),'*');

	// Loop until the guesses are used up
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		cin >> letter;
		letter = tolower(letter);
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (word==unknown)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
         break;
        }
case 3:
 {
    cout<<"Guess Name of Bollywood movies"<<endl;
    cout<<"choose your level:"<<endl;
	cout<<" 1. Level 1"<<endl;
    cout<<" 2. Level 2"<<endl;
	cout<<" 3. Level 3"<<endl;
    cin>>st;

	if(st==1)
    {
	srand(time(NULL));
	int n=rand()% 10;
	word=bollymovies[n];
	}

    if(st==2)
    {
        srand (time(NULL));
        int n=rand()%15;
        word=bollymovies[n];
    }
    if(st==3)
    {
        srand (time(NULL));
        int n=rand()%25;
        word=bollymovies[n];
    }

	// Initialize the secret word with the * character.
	string unknown(word.length(),'*');

	// Loop until the guesses are used up
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		cin >> letter;
		letter = tolower(letter);
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (word==unknown)
		{
			cout << word << endl<<endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
            break;
        }
case 4:
{
    cout<<"Guess Name of Hollywood stars"<<endl;
    cout<<"choose your level:"<<endl;
	cout<<" 1. Level 1"<<endl;
    cout<<" 2. Level 2"<<endl;
	cout<<" 3. Level 3"<<endl;
    cin>>st;

	if(st==1)
    {
	srand(time(NULL));
	int n=rand()% 10;
	word=hollystars[n];
	}

    if(st==2)
    {
        srand (time(NULL));
        int n=rand()%15;
        word=hollystars[n];
    }

    if(st==3)
    {
        srand (time(NULL));
        int n=rand()%25;
        word=hollystars[n];
    }

	// Initialize the secret word with the * character.
	string unknown(word.length(),'*');

	// Loop until the guesses are used up
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		cin >> letter;
		letter = tolower(letter);
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (word==unknown)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
            break;
}
case 5:
{
    cout<<"Guess Name of Bollywood stars"<<endl;
    cout<<"choose your level:"<<endl;
	cout<<" 1. Level 1"<<endl;
    cout<<" 2. Level 2"<<endl;
	cout<<" 3. Level 3"<<endl;
    cin>>st;

	if(st==1)
    {
	srand(time(NULL));
	int n=rand()% 10;
	word=bollystars[n];
	}

    if(st==2)
    {
        srand (time(NULL));
        int n=rand()%15;
        word=bollystars[n];
    }

    if(st==3)
    {
        srand (time(NULL));
        int n=rand()%25;
        word=bollystars[n];
    }

	// Initialize the secret word with the * character.
	string unknown(word.length(),'*');

	// Loop until the guesses are used up
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		cin >> letter;
		letter = tolower(letter);
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (word==unknown)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
            break;
}
case 6:
{
    cout<<"Guess Name of the sport"<<endl;
    cout<<"choose your level:"<<endl;
	cout<<" 1. Level 1"<<endl;
    cout<<" 2. Level 2"<<endl;
	cout<<" 3. Level 3"<<endl;
    cin>>st;

	if(st==1)
    {
	srand(time(NULL));
	int n=rand()% 10;
	word=sports[n];
	}

    if(st==2)
    {
        srand (time(NULL));
        int n=rand()%15;
        word=sports[n];
    }
    if(st==3)
    {
        srand (time(NULL));
        int n=rand()%25;
        word=sports[n];
    }

	// Initialize the secret word with the * character.
	string unknown(word.length(),'*');

	// Loop until the guesses are used up
	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		cin >> letter;
		letter = tolower(letter);
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (word==unknown)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
            break;
}

	default:
            cout<<"Option Invalid"<<endl;


}

	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "The word was : " << word << endl;
	}
	cin.get();
	return 0;
}

/* Take a one character guess and the secret word, and fill in the
 unfinished guessword. Returns number of characters matched.
 Also, returns zero if the character is already guessed. */

int letterFill (char guess, string secretword, string &guessword)
{
	int i;
	int matches=0;
	int len=secretword.length();
	for (i = 0; i< len; i++)
	{
		// Did we already match this letter in a previous guess?
		if (guess == guessword[i])
			return 0;
		// Is the guess in the secret word?
		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}
