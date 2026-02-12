#include <iostream>
//standard log class
class Log{
    public:
        const int LogLevelError=0;
        const int LogLevelWarning=1;
        const int LogLevelInfo=2;
    private:
        int m_logLevel;
    public:
        int setLevel(int level){
            m_logLevel=level;
            return m_logLevel;
        }
        void warn(const char* message){
            if(m_logLevel>=LogLevelWarning)std::cout<<"[Warning]"<<message<<std::endl;
        }
        void error(const char* message){
            if(m_logLevel>=LogLevelError)
            std::cout<<"[Error]"<<message<<std::endl;
        }
        void info(const char* message){
            if(m_logLevel>=LogLevelInfo)
            std::cout<<"[Info]"<<message<<std::endl;
        }
};
int main() {
    Log log;
    log.setLevel(log.LogLevelInfo);
    log.info("Hello");
    log.error("Hello");
    std::cin.get();
}