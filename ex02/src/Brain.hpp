# ifndef Brain_HPP
    # define Brain_HPP
#include <iostream>
class Brain {
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        virtual ~Brain();

    private:
       std::string ideas[100];
};

# endif 