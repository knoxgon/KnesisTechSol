#pragma once

// Behaviour hook map
//
// Copyright (c) Volkan G�ven.
// https://github.com/knoxgon
//

#include <iostream>

class Behavior {
private:
    std::string
        OpenWeb,
        RedirectToWeb,
        RedirectToLogin,
        FocusLoginFieldUsername,
        FocusLoginFieldPassword,
        PressLoginButton
        ;

public:
    Behavior();
    ~Behavior();

    void Register();
};
