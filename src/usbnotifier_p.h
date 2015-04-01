// TODO keep a cache of the usb devices

namespace UsbNotifier {

class UsbNotifierPrivate
{
public:
    UsbNotifierPrivate()
        : vendor(0)
        , product(0)
        , supportsHotplug(false)
    {}

    int vendor;
    int product;
    bool supportsHotplug;
};

}
