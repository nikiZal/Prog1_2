#include "User.h"
#include "Rights.h"

User::User()
    : User("None", {}) {};

User::User(string newName)
    : User(newName, {}) {};

User::User(string newName, set <int> newWatchlist)
    :name{newName}, watchlist{newWatchlist}, rights(Rights()){};