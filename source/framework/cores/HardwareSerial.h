
#ifndef _WIRISH_HARDWARESERIAL_H_
#define _WIRISH_HARDWARESERIAL_H_

#include "../board/startup.h"
#include "libmaple_types.h"

#include "Print.h"
#include "Stream.h"


#define SERIAL_TX_BUFFER_SIZE 64
#define SERIAL_RX_BUFFER_SIZE 64
typedef uint8_t tx_buffer_index_t;
typedef uint8_t rx_buffer_index_t;
 
struct usart_dev;


#define DEFINE_HWSERIAL(name, n)                                   \
	HardwareSerial name(USART##n,                                  \
						BOARD_USART##n##_TX_PIN,                   \
						BOARD_USART##n##_RX_PIN)

class HardwareSerial : public Stream {

public:
    HardwareSerial(struct usart_dev *usart_device,
                   uint8 tx_pin,
                   uint8 rx_pin);

    /* Set up/tear down */
    void begin(uint32 baud);
    void begin(uint32 baud,uint8_t config);
    void end();
    virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
    int availableForWrite(void);
    virtual void flush(void);
    virtual size_t write(uint8_t);
    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write;

    /* Pin accessors */
    int txPin(void) { return this->tx_pin; }
    int rxPin(void) { return this->rx_pin; }
	
	operator bool() { return true; }

    /* Escape hatch into libmaple */
    /* FIXME [0.0.13] documentation */
    struct usart_dev* c_dev(void) { return this->usart_device; }
    
    bool connected();
    void flushTX();
    void msgDone();
private:
    struct usart_dev *usart_device;
    uint8 tx_pin;
    uint8 rx_pin;
  protected:
};

extern HardwareSerial Serial4;
extern HardwareSerial Serial3;
extern HardwareSerial Serial2;
extern HardwareSerial Serial1;
#endif
