#include <iostream>
#include <vector>

class Windows_mgr {
public:
    std::vector<Screen> screens{Screen(24, 80, ' ')};

private:
    void clear(unsigned n)
    {
        screens[n].set(' ');
    }
};

class Screen {
    friend Windows_mgr;

public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : heigth(ht), width(wd), contents(ht * wd, c)
    {
    }
    char get() const
    {
        return contents[cursor];
    }
    inline char get(pos ht, pos wd) const;
    Screen& move(pos r, pos c);
    Screen& set(char);
    Screen& set(pos, pos, char);
    Screen& display(std::ostream& os)
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(std::ostream& os)
    {
        os << contents << std::endl;
    }
    pos cursor = 0;
    pos heigth = 0, width = 0;
    std::string contents;
};

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

inline Screen& Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}