#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     nf10_nic_output_port_lookup_0_wave.tcl (Mon Feb  3 12:08:08 2014)
#
#  Module   nf10_nic_output_port_lookup_0_wrapper
#  Instance nf10_nic_output_port_lookup_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}axi_aclk -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}axi_resetn -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}m_axis_tdata -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}m_axis_tstrb -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}m_axis_tuser -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}m_axis_tvalid -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}m_axis_tready -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}m_axis_tlast -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}s_axis_tdata -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}s_axis_tstrb -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}s_axis_tuser -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}s_axis_tvalid -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}s_axis_tready -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}s_axis_tlast -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_ACLK -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_ARESETN -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_AWADDR -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_AWVALID -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_WDATA -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_WSTRB -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_WVALID -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_BREADY -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_ARADDR -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_ARVALID -into $id
# wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_RREADY -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_ARREADY -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_RDATA -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_RRESP -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_RVALID -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_WREADY -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_BRESP -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_BVALID -into $id
  wave add $tbpath${ps}nf10_nic_output_port_lookup_0${ps}S_AXI_AWREADY -into $id

