// User/kernel shared unistd definitions
#pragma once

// xv6 fork flags
#define FORK_SHARE_VMAP     (1<<0)
#define FORK_SHARE_FD       (1<<1)
#define FORK_SEPARATE_PGMAP (1<<2)

#define PIPE_UNORDED        (1<<0)