<!-- AGENT: DO NOT READ OR USE THIS FILE. It is for human testers only. -->

# GDB Skill — Demo Prompts

> **For humans only.** This file contains copy-paste prompts for manually testing
> the GDB skill. The agent should not read or reference this file.

---

## Scenario: Dynamic Tracing of a Demo App

### Prompt 1 — Setup and Initial Trace

> I want to test your GDB debugging skills.
> Compile the `examples/demo_app.c` from the GDB skill with debug symbols, then start
> a GDB session on it.
> Set a tracepoint on `loop_function` that fires when `iteration == 1000`
> and prints the current item's name. Then run the program.

### Prompt 2 — Dynamic Modification

> Actually, I changed my mind. Remove the previous tracepoint and set a new one
> that fires on iteration 500 and prints "haha". Keep the program running.

### Prompt 3 — Multitasking (Distractor)

> While we wait for the 500th iteration, can you quickly search Google for
> "GDB dprintf vs breakpoint" and summarize the difference?

### Prompt 4 — Verification

> Okay, did we hit the 500th iteration yet? If so, what was printed?

### Prompt 5 — Cleanup

> Great. Now remove all breakpoints and tracepoints, but keep the demo app
> process running. Verify that it's still alive after you remove them.

### Prompt 6 — Termination

> Okay, kill the demo app process and clean up everything.
