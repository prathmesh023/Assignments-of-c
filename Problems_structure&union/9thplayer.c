// Write a program which contains information about cricket team (country name, coach name, pointer to coach structure, number of players, array of player structure). player (name, type - batsman, bowler, no of matches played, age, number of runs scored, number of wickets taken, number of matches played), coach (name, experience, country name).
// Write a function which accept cricket team structure from user and print information of such players which plays maximum number of matches.

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[50];
    int experience; 
    char country_name[50];
} Coach;

typedef struct 
{
    char name[50];
    char type[20]; 
    int age;
    int no_of_matches_played; 
    int number_of_runs_scored;
    int number_of_wickets_taken;
} Player;

typedef struct 
{
    char country_name[50];
    char coach_name[50]; 
    int number_of_players;
    Player players[15]; 
} CricketTeam;

void print_player_info(const Player* p) 
{
    printf("\n  Player Name: %s\n", p->name);
    printf("  Type: %s, Age: %d\n", p->type, p->age);
    printf("  Matches Played: %d\n", p->no_of_matches_played);
    printf("  Runs Scored: %d, Wickets Taken: %d\n", p->number_of_runs_scored, p->number_of_wickets_taken);
}

void print_max_matches_player(const CricketTeam* team) 
{
    if (team->number_of_players == 0) {
        printf("No players in the team.\n");
        return;
    }

    int max_matches = 0;
    
    for (int i = 0; i < team->number_of_players; i++) {
        if (team->players[i].no_of_matches_played > max_matches) {
            max_matches = team->players[i].no_of_matches_played;
        }
    }

    printf("\n*** Player(s) with Maximum Matches Played (%d) in Team %s ***\n", max_matches, team->country_name);
    
    for (int i = 0; i < team->number_of_players; i++) {
        if (team->players[i].no_of_matches_played == max_matches) {
            print_player_info(&team->players[i]);
        }
    }
}

int main() 
{
    Coach c1;
    strcpy(c1.name, "Ravi Shastri");
    c1.experience = 10;
    strcpy(c1.country_name, "India");

    CricketTeam team_india;
    strcpy(team_india.country_name, "India");
    strcpy(team_india.coach_name, c1.name); 
    team_india.number_of_players = 3;

    strcpy(team_india.players[0].name, "Virat Kohli");
    strcpy(team_india.players[0].type, "Batsman");
    team_india.players[0].age = 35;
    team_india.players[0].no_of_matches_played = 500;
    team_india.players[0].number_of_runs_scored = 25000;
    team_india.players[0].number_of_wickets_taken = 5;

    strcpy(team_india.players[1].name, "Jasprit Bumrah");
    strcpy(team_india.players[1].type, "Bowler");
    team_india.players[1].age = 30;
    team_india.players[1].no_of_matches_played = 300;
    team_india.players[1].number_of_runs_scored = 500;
    team_india.players[1].number_of_wickets_taken = 450;

    strcpy(team_india.players[2].name, "Rohit Sharma");
    strcpy(team_india.players[2].type, "Batsman");
    team_india.players[2].age = 36;
    team_india.players[2].no_of_matches_played = 500;
    team_india.players[2].number_of_runs_scored = 20000;
    team_india.players[2].number_of_wickets_taken = 3;
    
    printf("Team: %s, Coach: %s, Players: %d\n", team_india.country_name, team_india.coach_name, team_india.number_of_players);
    
    print_max_matches_player(&team_india);

    return 0;
}



/* Output 
Team: India, Coach: Ravi Shastri, Players: 3

*** Player(s) with Maximum Matches Played (500) in Team India ***

  Player Name: Virat Kohli
  Type: Batsman, Age: 35
  Matches Played: 500
  Runs Scored: 25000, Wickets Taken: 5

  Player Name: Rohit Sharma
  Type: Batsman, Age: 36
  Matches Played: 500
  Runs Scored: 20000, Wickets Taken: 3
*/