#!/usr/bin/perl
$ENV{HARNESS_ACTIVE} = 1 if scalar @ARGV && shift eq '-tap';
exec './macEnvExpandTest' or die "Can't run macEnvExpandTest: $!\n";
