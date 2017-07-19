/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /root/develop/f-stack/lib/../freebsd/opencrypto/cryptodev_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */

#include <sys/param.h>
#include <sys/queue.h>
#include <sys/kernel.h>
#include <sys/kobj.h>
#include <sys/malloc.h>
#include <opencrypto/cryptodev.h>
#include "cryptodev_if.h"

struct kobjop_desc cryptodev_newsession_desc = {
	0, { &cryptodev_newsession_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc cryptodev_freesession_desc = {
	0, { &cryptodev_freesession_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc cryptodev_process_desc = {
	0, { &cryptodev_process_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc cryptodev_kprocess_desc = {
	0, { &cryptodev_kprocess_desc, (kobjop_t)kobj_error_method }
};

