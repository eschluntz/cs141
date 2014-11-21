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
    work_m_00000000001182977784_3913188552_init();
    work_m_00000000000583632059_3037777339_init();
    work_m_00000000003617053623_3666280766_init();
    work_m_00000000001980008863_3415651129_init();
    work_m_00000000002812634083_3877310806_init();
    work_m_00000000004165586116_2381739659_init();
    work_m_00000000000228065848_0116314407_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000228065848_0116314407");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
