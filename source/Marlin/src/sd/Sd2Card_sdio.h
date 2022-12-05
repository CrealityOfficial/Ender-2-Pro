
#pragma once

#include "../inc/MarlinConfig.h"

#include "SdInfo.h"
#include "disk_io_driver.h"

bool SDIO_Init();
bool SDIO_ReadBlock(uint32_t block, uint8_t *dst);
bool SDIO_WriteBlock(uint32_t block, const uint8_t *src);

class DiskIODriver_SDIO : public DiskIODriver {
  public:
    virtual bool init(const uint8_t sckRateID=0, const pin_t chipSelectPin=0) override { return SDIO_Init(); }

    virtual bool readCSD(csd_t *csd)                              override { return false; }

    virtual bool readStart(const uint32_t block)                  override { return false; }
    virtual bool readData(uint8_t *dst)                           override { return false; }
    virtual bool readStop()                                       override { return false; }

    virtual bool writeStart(const uint32_t block, const uint32_t) override { return false; }
    virtual bool writeData(const uint8_t *src)                    override { return false; }
    virtual bool writeStop()                                      override { return false; }

    virtual bool readBlock(uint32_t block, uint8_t *dst)          override { return SDIO_ReadBlock(block, dst); }
    virtual bool writeBlock(uint32_t block, const uint8_t *src)   override { return SDIO_WriteBlock(block, src); }

    virtual uint32_t cardSize()                                   override { return 0; }

    virtual bool isReady()                                        override { return true; }

    virtual void idle()                                           override {}
};
