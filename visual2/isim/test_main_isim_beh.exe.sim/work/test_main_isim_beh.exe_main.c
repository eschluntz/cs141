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
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000002506336732_3567332855_init();
    unisims_ver_m_00000000003084551676_3025527310_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000000702434006_3236028663_init();
    unisims_ver_m_00000000002304772977_3342287592_init();
    work_m_00000000003953380272_3959010678_init();
    work_m_00000000004086056836_1391599013_init();
    work_m_00000000001809769286_2598016587_init();
    work_m_00000000001683802291_1799499590_init();
    work_m_00000000001052856801_0286164271_init();
    work_m_00000000001309941304_4042999134_init();
    work_m_00000000004093713498_2073120511_init();


    xsi_register_tops("work_m_00000000001309941304_4042999134");
    xsi_register_tops("work_m_00000000004093713498_2073120511");


    return xsi_run_simulation(argc, argv);

}
