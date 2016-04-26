#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_mag.h>


static struct mag_hw cust_mag_hw = {
    .i2c_num = 0,
#ifdef CONFIG_BULMA_PROJECT
    .direction = 2, 
#else
    .direction = 1, 
 #endif
    .power_id = MT65XX_POWER_NONE,  /*!< LDO is not used */
    .power_vol= VOL_DEFAULT,        /*!< LDO is not used */
};
struct mag_hw* mmc3516x_get_cust_mag_hw(void) 
{
    return &cust_mag_hw;
}
