#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x683cfe8d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x50c045ea, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf3fdd38, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xbef9803c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x397da276, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x574c672f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5bd4aa59, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xd4aab77a, __VMLINUX_SYMBOL_STR(pci_intx_mask_supported) },
	{ 0x6db51ac7, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe0e0c599, __VMLINUX_SYMBOL_STR(__uio_register_device) },
	{ 0xb19a3856, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xa03009ce, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xa11b55b2, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xfce6add6, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xcff815dc, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x65d462c4, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xda9d58fa, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xccca000a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7875fbf2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3ee0cbe3, __VMLINUX_SYMBOL_STR(pci_check_and_mask_intx) },
	{ 0xf3c41f50, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x5045d93, __VMLINUX_SYMBOL_STR(pci_cfg_access_unlock) },
	{ 0x67224ce9, __VMLINUX_SYMBOL_STR(pci_cfg_access_lock) },
	{ 0x6e60c338, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x5944d015, __VMLINUX_SYMBOL_STR(__cachemode2pte_tbl) },
	{ 0xb581290c, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x92f61978, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x70d7563d, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2f590f7, __VMLINUX_SYMBOL_STR(uio_unregister_device) },
	{ 0xfd2b2025, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1f45b668, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x62083939, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0x79a3bdd3, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0xe16ad39b, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uio";


MODULE_INFO(srcversion, "47AE41AD0F20FAA13A85D76");
