/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002425492956_0827906485_init();
    work_m_00000000000033996299_3185228940_init();
    work_m_00000000002392115262_0301344823_init();
    work_m_00000000002955016447_0644182429_init();
    work_m_00000000003853563406_3929880127_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003853563406_3929880127");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
