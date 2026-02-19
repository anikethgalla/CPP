#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
class Device{};

class DeviceManager{ 
    private:
        std::unordered_map<std::string, std::vector<Device*>> m_Devices;
    public:
        const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const{
            return m_Devices;
        }
};
int main(){
    DeviceManager dm;
    //const std::unordered_map<std::string,std::vector<Device*>> devices=dm.GetDevices();
    const auto& devices=dm.GetDevices();
    

}