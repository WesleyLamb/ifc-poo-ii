#ifndef ResultSetInterface_hpp
#define ResultSetInterface_hpp

#include <string>

class ResultSetInterface {
    public:
        virtual std::string getString(std::string aFieldName) = 0;
        virtual int getInt(std::string aFieldName) = 0;
        virtual int getInt(int anIndex) = 0;
        virtual bool next() = 0;
        virtual int count() = 0;
};

#endif