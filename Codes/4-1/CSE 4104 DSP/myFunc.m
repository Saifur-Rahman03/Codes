## Copyright (C) 2022 hp
##
## This program is free software: you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see <https://www.gnu.org/licenses/>.

## -*- texinfo -*-
## @deftypefn {} {@var{retval} =} mysum (@var{input1}, @var{input2})
##
## @seealso{}
## @end deftypefn

## Author: hp <hp@SRN>
## Created: 2022-09-19

function [] = myFunc (input1, input2)
  sum = input1 + input2;
  mul = input1 * input2;
  disp(sum);
  disp(mul);
endfunction
