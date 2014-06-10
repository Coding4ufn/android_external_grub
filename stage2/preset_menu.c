const char *preset_menu =
    "rootnoverify (hd0,0)\n"
    "default=0\n"
    "hiddenmenu\n"
    "timeout 0\n"
    "fallback 0\n"
    "\n"
    "title SVMP Startup from /dev/sda\n"
    "       cmdline (hd0,1)/cmdline\n"
    "       kernel --use-cmd-line (hd0,1)/kernel\n"
    "       initrd (hd0,1)/ramdisk\n";
