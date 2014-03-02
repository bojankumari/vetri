#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     top_level_ports_wave.tcl (Mon Feb  3 12:08:08 2014)
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

wave add $tbpath${ps}RESET -into $id 
wave add $tbpath${ps}RS232_Uart_1_sout -into $id 
wave add $tbpath${ps}RS232_Uart_1_sin -into $id 
wave add $tbpath${ps}CLK -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l2_p_pin -into $id 
wave add $tbpath${ps}refclk_A_p -into $id 
wave add $tbpath${ps}refclk_A_n -into $id 
wave add $tbpath${ps}refclk_B_p -into $id 
wave add $tbpath${ps}refclk_B_n -into $id 
wave add $tbpath${ps}refclk_C_p -into $id 
wave add $tbpath${ps}refclk_C_n -into $id 
wave add $tbpath${ps}refclk_D_p -into $id 
wave add $tbpath${ps}refclk_D_n -into $id 
wave add $tbpath${ps}MDC -into $id 
wave add $tbpath${ps}MDIO -into $id 
wave add $tbpath${ps}PHY_RST_N -into $id 
wave add $tbpath${ps}pcie_clk_p -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_0_txp_pin -into $id 
wave add $tbpath${ps}pcie_clk_n -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_0_rxp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_0_rxn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_1_txp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_1_txn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_1_rxp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_1_rxn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_4_txp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_2_txp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_2_txn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_2_rxp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_2_rxn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_3_txp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_3_txn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_3_rxp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_3_rxn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_4_txn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_4_rxp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_4_rxn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_5_txp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_5_txn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_5_rxp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_5_rxn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_6_txp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_6_txn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_6_rxp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_6_rxn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_7_txn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_7_txp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_7_rxn_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_7_rxp_pin -into $id 
wave add $tbpath${ps}pcie_top_0_pci_exp_0_txn_pin -into $id 
wave add $tbpath${ps}axi_emc_0_Mem_A_pin -into $id 
wave add $tbpath${ps}axi_emc_0_Mem_CEN_pin -into $id 
wave add $tbpath${ps}axi_emc_0_Mem_OEN_pin -into $id 
wave add $tbpath${ps}axi_emc_0_Mem_WEN_pin -into $id 
wave add $tbpath${ps}axi_emc_0_Mem_DQ_pin -into $id 
wave add $tbpath${ps}axi_cfg_fpga_0_GPIO_IO_pin -into $id 

