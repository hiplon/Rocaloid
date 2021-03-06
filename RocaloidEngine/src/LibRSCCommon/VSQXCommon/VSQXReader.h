 /*
  * VSQXReader.h
  *
  * Copyright (C) 2013 - Rocaloid Development Group (RDG)
  *
  * Created by rgwan 
  * This program is free software; you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation; either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program. If not, see <http://www.gnu.org/licenses/>.
  */
 #ifndef VSQXREADER_H
 #define VSQXREADER_H
namespace VSQXCommon
{
	using namespace RSCCommon;
	class VSQXReader
	{
		public:
			void Open(string FileName);
			void Close();
			
			void Read(RSC& _RSC);
			void ReadTempos(RSC& _RSC, string EndTag);

			void ReadMusicalPart(RSC& _RSC);
				
		private:
 			VSQ3Reader Reader;
			int Resolution;
			double MusicalPartStartPos;
	};
};
 
 #endif /*REDAERXQSV _H */
 