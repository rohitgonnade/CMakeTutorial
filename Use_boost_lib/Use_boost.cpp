#include "Use_boost.h"
#include <iostream>

bool Use_Boost::doesExists(const std::string pathtoSearch)const
{
    using namespace boost::filesystem;
    path p (pathtoSearch);

    try
    {
    if (exists(p))
    {
        if (is_regular_file(p))
        {
            std::cout << p << " size is " << file_size(p) << '\n';
        }
        else if (is_directory(p))
        {
            std::cout << p << " is a directory containing:\n";

            for (directory_entry& x : directory_iterator(p))
            std::cout << "    " << x.path() << '\n';
        }
        else
        {
            std::cout << p << " exists, but is not a regular file or directory\n";\
        }

        return true;
    }
    else
        std::cout << p << " does not exist\n";
        return false;
    }

    catch (const filesystem_error& ex)
    {
        std::cout << ex.what() << '\n';
        return false;
    }
}